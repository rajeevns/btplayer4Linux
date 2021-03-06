#############################################################################
# Makefile for building: btplayer
# Generated by qmake (2.01a) (Qt 4.8.1) on: Thu Jun 13 00:01:48 2013
# Project:  btplayer.pro
# Template: app
# Command: /usr/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++-32 -o Makefile btplayer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_DBUS_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m32 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m32 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-32 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtDBus -I/usr/include/qt4 -I. -Iavrcpprofile -Idbusbindings -I.
LINK          = g++
LFLAGS        = -m32 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lQtDBus -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = dbusbindings/org.bluez_audiosource.cpp \
		dbusbindings/org.bluez_control.cpp \
		dbusbindings/org.gnome.SettingsDaemon.cpp \
		main.cpp \
		avrcpprofile/qtavrcpbindingtestapp.cpp moc_org.bluez_audiosource.cpp \
		moc_org.bluez_control.cpp \
		moc_org.gnome.SettingsDaemon.cpp \
		moc_qtavrcpbindingtestapp.cpp \
		qrc_btplayericons.cpp
OBJECTS       = org.bluez_audiosource.o \
		org.bluez_control.o \
		org.gnome.SettingsDaemon.o \
		main.o \
		qtavrcpbindingtestapp.o \
		moc_org.bluez_audiosource.o \
		moc_org.bluez_control.o \
		moc_org.gnome.SettingsDaemon.o \
		moc_qtavrcpbindingtestapp.o \
		qrc_btplayericons.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/dbusinterfaces.prf \
		/usr/share/qt4/mkspecs/features/dbusadaptors.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		btplayer.pro
QMAKE_TARGET  = btplayer
DESTDIR       = 
TARGET        = btplayer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: btplayer.pro  /usr/share/qt4/mkspecs/linux-g++-32/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/dbusinterfaces.prf \
		/usr/share/qt4/mkspecs/features/dbusadaptors.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtDBus.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-32 -o Makefile btplayer.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/dbusinterfaces.prf:
/usr/share/qt4/mkspecs/features/dbusadaptors.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtDBus.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-32 -o Makefile btplayer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/btplayer1.0.0 || $(MKDIR) .tmp/btplayer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/btplayer1.0.0/ && $(COPY_FILE) --parents dbusbindings/org.bluez_audiosource.h dbusbindings/org.bluez_control.h dbusbindings/org.gnome.SettingsDaemon.h avrcpprofile/qtavrcpbindingtestapp.h .tmp/btplayer1.0.0/ && $(COPY_FILE) --parents btplayericons.qrc .tmp/btplayer1.0.0/ && $(COPY_FILE) --parents dbusbindings/org.bluez_audiosource.cpp dbusbindings/org.bluez_control.cpp dbusbindings/org.gnome.SettingsDaemon.cpp main.cpp avrcpprofile/qtavrcpbindingtestapp.cpp .tmp/btplayer1.0.0/ && (cd `dirname .tmp/btplayer1.0.0` && $(TAR) btplayer1.0.0.tar btplayer1.0.0 && $(COMPRESS) btplayer1.0.0.tar) && $(MOVE) `dirname .tmp/btplayer1.0.0`/btplayer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/btplayer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_org.bluez_audiosource.cpp moc_org.bluez_control.cpp moc_org.gnome.SettingsDaemon.cpp moc_qtavrcpbindingtestapp.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_org.bluez_audiosource.cpp moc_org.bluez_control.cpp moc_org.gnome.SettingsDaemon.cpp moc_qtavrcpbindingtestapp.cpp
moc_org.bluez_audiosource.cpp: dbusbindings/org.bluez_audiosource.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dbusbindings/org.bluez_audiosource.h -o moc_org.bluez_audiosource.cpp

moc_org.bluez_control.cpp: dbusbindings/org.bluez_control.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dbusbindings/org.bluez_control.h -o moc_org.bluez_control.cpp

moc_org.gnome.SettingsDaemon.cpp: dbusbindings/org.gnome.SettingsDaemon.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) dbusbindings/org.gnome.SettingsDaemon.h -o moc_org.gnome.SettingsDaemon.cpp

moc_qtavrcpbindingtestapp.cpp: avrcpprofile/qtavrcpbindingtestapp.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) avrcpprofile/qtavrcpbindingtestapp.h -o moc_qtavrcpbindingtestapp.cpp

compiler_dbus_interface_source_make_all:
compiler_dbus_interface_source_clean:
compiler_dbus_adaptor_source_make_all:
compiler_dbus_adaptor_source_clean:
compiler_rcc_make_all: qrc_btplayericons.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_btplayericons.cpp
qrc_btplayericons.cpp: btplayericons.qrc \
		images/btdisconnect.png \
		images/btplayer.png \
		images/stop.png \
		images/next.png \
		images/Audio-Speaker.png \
		images/Sound-System.png \
		images/play.png \
		images/Audio.png \
		images/pause.png \
		images/settings.png \
		images/btconnected.png \
		images/previous.png
	/usr/bin/rcc -name btplayericons btplayericons.qrc -o qrc_btplayericons.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_dbus_interface_header_make_all:
compiler_dbus_interface_header_clean:
compiler_dbus_interface_moc_make_all:
compiler_dbus_interface_moc_clean:
compiler_dbus_adaptor_header_make_all:
compiler_dbus_adaptor_header_clean:
compiler_dbus_adaptor_moc_make_all:
compiler_dbus_adaptor_moc_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

org.bluez_audiosource.o: dbusbindings/org.bluez_audiosource.cpp dbusbindings/org.bluez_audiosource.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o org.bluez_audiosource.o dbusbindings/org.bluez_audiosource.cpp

org.bluez_control.o: dbusbindings/org.bluez_control.cpp dbusbindings/org.bluez_control.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o org.bluez_control.o dbusbindings/org.bluez_control.cpp

org.gnome.SettingsDaemon.o: dbusbindings/org.gnome.SettingsDaemon.cpp dbusbindings/org.gnome.SettingsDaemon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o org.gnome.SettingsDaemon.o dbusbindings/org.gnome.SettingsDaemon.cpp

main.o: main.cpp avrcpprofile/qtavrcpbindingtestapp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

qtavrcpbindingtestapp.o: avrcpprofile/qtavrcpbindingtestapp.cpp avrcpprofile/qtavrcpbindingtestapp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtavrcpbindingtestapp.o avrcpprofile/qtavrcpbindingtestapp.cpp

moc_org.bluez_audiosource.o: moc_org.bluez_audiosource.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_org.bluez_audiosource.o moc_org.bluez_audiosource.cpp

moc_org.bluez_control.o: moc_org.bluez_control.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_org.bluez_control.o moc_org.bluez_control.cpp

moc_org.gnome.SettingsDaemon.o: moc_org.gnome.SettingsDaemon.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_org.gnome.SettingsDaemon.o moc_org.gnome.SettingsDaemon.cpp

moc_qtavrcpbindingtestapp.o: moc_qtavrcpbindingtestapp.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtavrcpbindingtestapp.o moc_qtavrcpbindingtestapp.cpp

qrc_btplayericons.o: qrc_btplayericons.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_btplayericons.o qrc_btplayericons.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

