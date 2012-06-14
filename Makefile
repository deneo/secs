# Make sex

PROG = secs
INSTALLPREFIX = /usr/local/bin/
#BINDIR=${PREFIX}/bin
MANDIR = /usr/share/man/man6/
MAN6 = secs.6.gz

#.include <bsd.prog.mk>

# Added by Jan
# Who has no idea what he's doing...

SRC = secs.c
CC = cc 
CFLAGS = -Wall -g

sex : ${PROG}

	@echo "build ${SRC}"
	@echo "CC ${CFLAGS} ${SRC}"
	@${CC} ${CFLAGS} ${SRC} -o ${PROG}

install : ${PROG}

	@echo "installing binary file to ${INSTALLPREFIX}${PROG}"
	@cp ${PROG} ${INSTALLPREFIX}
	@cp ${MAN6} ${MANDIR}
	@chmod 755 ${INSTALLPREFIX}${PROG} ${MANDIR}${MAN6}
	@echo "installed"

uninstall :

	@echo "uninstalling binary file (${INSTALLPREFIX}${PROG})"
	@rm -f ${INSTALLPREFIX}${PROG}
	@echo "${PROG} uninstalled"

clean :

	@echo "cleaning ${PROG}"
	@rm ${PROG}
	@echo "${PROG} cleaned"
