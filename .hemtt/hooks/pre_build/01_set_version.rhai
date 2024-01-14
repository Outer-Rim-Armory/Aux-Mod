let modcpp = HEMTT_VFS.join("mod.cpp")
    .open_file()
    .read();
modcpp.replace("0.0.0",
    HEMTT.project()
    .version()
    .to_string_short()
);
HEMTT_VFS.join("mod.cpp")
    .create_file()
    .write(modcpp);
print("mod.cpp version set");


let readme = HEMTT_VFS.join("README.md")
    .open_file()
    .read();
readme.replace("0.0.0",
    HEMTT.project()
    .version()
    .to_string_short()
);
HEMTT_VFS.join("README.md")
    .create_file()
    .write(readme);
print("README.md version set to " + HEMTT.project().version());