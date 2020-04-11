
Debian
====================
This directory contains files used to package blockidcoind/blockidcoin-qt
for Debian-based Linux systems. If you compile blockidcoind/blockidcoin-qt yourself, there are some useful files here.

## blockidcoin: URI support ##


blockidcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install blockidcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your blockidcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/blockidcoin128.png` to `/usr/share/pixmaps`

blockidcoin-qt.protocol (KDE)

