// Read the current contents of script_version.hpp
let script_version = HEMTT_RFS.join("addons")
    .join("core")
    .join("script_version.hpp")
    .open_file()
    .read();

// Replace the current version with the new version
let prefix = "#define MINOR ";
let current = HEMTT.project().version().minor();
let next = current + 1;

script_version.replace(prefix + current.to_string(), prefix + next.to_string());
current = HEMTT.project().version().patch();
script_version.replace("#define PATCH " + current.to_string(), "#define PATCH 0");
current = HEMTT.project().version().build();
script_version.replace("#define BUILD " + current.to_string(), "#define BUILD 0");

// Write the modified contents to script_version.hpp
HEMTT_RFS.join("addons")
    .join("core")
    .join("script_version.hpp")
    .create_file()
    .write(script_version);