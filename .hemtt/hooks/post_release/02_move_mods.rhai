let import_mods = [
    "simplesuppress_main.pbo",
    "simplesuppress_main.pbo.simplesuppress_1.1.0.3-3f3da402.bisign",
    "simplesuppress_suppress.pbo",
    "simplesuppress_suppress.pbo.simplesuppress_1.1.0.3-3f3da402.bisign"
];

for mod in import_mods {
    HEMTT_RFS.join("Import")
        .join(mod)
        .move(HEMTT_RFS.join(".hemttout")
            .join("release")
            .join("addons"));
    print("Moved file: " + mod);
}