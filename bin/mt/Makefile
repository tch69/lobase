#	$OpenBSD: Makefile,v 1.9 2016/03/30 06:38:40 jmc Exp $

COPTS+=	-DRMT

TOPDIR?=../..

PROG=	mt
SRCS=	mt.c mtrmt.c
DPADD=	${LIBUTIL}
LDADD=	-loutil

LINKS=	mt ${DESTDIR}${BINDIR}/eject

include ${.TOPDIR}/mk/bsd.prog.mk
