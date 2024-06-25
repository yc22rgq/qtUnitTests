QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += ../unitTests/gcd.h
SOURCES +=  tst_test.cpp ../unitTests/gcd.cpp
