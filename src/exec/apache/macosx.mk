##
##  Makefile -- Build procedure for sample konoha Apache module
##  Autogenerated via ``apxs -n konoha -g''.
##

builddir=.
#top_srcdir=/usr
top_srcdir=/usr/share/httpd
#top_builddir=/usr
top_builddir=/usr/share/httpd
include /usr/share/httpd/build/special.mk

#   the used tools
APXS=apxs
APACHECTL=apachectl

#   additional defines, includes and libraries
DEFS=-DHAVE_CONFIG_H
INCLUDES=-I../../../include -I$(KONOHA_BUILD_DIR)
#LIBS=
CFLAGS=-g -O2 -Wall
LDFLAGS=-L$(KONOHA_BUILD_DIR) -lkonoha
#-std=c99

#   the default target
all: local-shared-build

#   install the shared object file into Apache 
install: install-modules-yes

#   cleanup
clean:
	-rm -f mod_konoha.o mod_konoha.lo mod_konoha.slo mod_konoha.la 

#   simple test
test: reload
	wget http://localhost/

#   install and activate shared object by reloading Apache to
#   force a reload of the shared object file
reload: install restart

#   the general Apache start/restart/stop
#   procedures
start:
	$(APACHECTL) start
restart:
	$(APACHECTL) restart
stop:
	$(APACHECTL) stop

