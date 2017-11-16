
Debian
====================
This directory contains files used to package moselbitd/moselbit-qt
for Debian-based Linux systems. If you compile moselbitd/moselbit-qt yourself, there are some useful files here.

## moselbit: URI support ##


moselbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install moselbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your moselbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/moselbit128.png` to `/usr/share/pixmaps`

moselbit-qt.protocol (KDE)

