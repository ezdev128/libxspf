## Process this file with automake to produce Makefile.in
AUTOMAKE_OPTIONS = 1.10 foreign dist-zip no-dist-gzip

## Build doc files
all-local: html/index.html

html/index.html: $(srcdir)/../include/xspf/*.h \
		$(srcdir)/../src/*.cpp \
		$(srcdir)/../src/*.h
	-rm -Rf "$(builddir)/html"
	doxygen Doxyfile
	touch html/index.html


## Clean doc files
clean-local:
	-rm -Rf "$(builddir)/html"
	-rm -f *.qch


## Clean configure files
distclean-local:
	-rm -f config.{log,status} release.sh Doxyfile


## Install doc files
install-data-local:
	$(MKDIR_P) "$(DESTDIR)$(docdir)/html"  ## Didn't work with installdirs-local
	$(INSTALL_DATA) html/*.{css,gif,html,png} "$(DESTDIR)$(docdir)/html/"
	$(INSTALL_DATA) *.qch "$(DESTDIR)$(docdir)/"


## Uninstall doc files
uninstall-local:
	-rm -Rf "$(DESTDIR)$(docdir)/html"
	-rm -f "$(DESTDIR)$(docdir)"/*.qch
