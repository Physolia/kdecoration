# KDecoration2

Plugin based library to create window decorations.

## Introduction

KDecoration2 is a library to create window decorations. These window decorations can be used by
for example an X11 based window manager which re-parents a Client window to a window decoration
frame.

The library consists of two parts:
* Decoration API for implementing a Decoration theme
* Private API to implement the backend part (e.g. from Window Manager side)

## Providing a Decoration

To provide a custom decoration one needs to create a plugin and provide an own implementation
of KDecoration2::Decoration. For a framework to load and find the plugin it needs to be compiled
with the proper json metadata. An example for such metadata (deco.json):

    {
        "KPlugin": {
            "Id": "org.kde.myAweseomeDecoration",
            "ServiceTypes": [
                "org.kde.kdecoration2"
            ]
        },
        "org.kde.kdecoration2": {
            "blur": false, /* blur behind not needed */
            "kcmodule": true /* comes with a configuration module */
        }
    }

To simplify one can use the KPluginFactory macro from the KCoreAddons framework:

    K_PLUGIN_FACTORY_WITH_JSON(
        MyAwesomeDecorationFactory,
        "deco.json",
        registerPlugin<MyAwesomeDecoration::Decoration>();
    )

The plugin needs to get installed to `${PLUGIN_INSTALL_DIR}/org.kde.kdecoration2`.


## Links

- Home page: <https://projects.kde.org/projects/kde/workspace/kdecoration>
- Mailing list: <https://mail.kde.org/mailman/listinfo/kwin>
- IRC channel: #kde-devel or #kwin on Freenode
- Git repository: <https://projects.kde.org/projects/kde/workspace/kdecoration/repository>
