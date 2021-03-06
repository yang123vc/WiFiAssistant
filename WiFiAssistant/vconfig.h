#ifndef VERSION_CONFIG_H
#define VERSION_CONFIG_H

#include "upver.h"

#define TOSTR_(a) L#a
#define TOSTR(a) TOSTR_(a)
#define TOSTRING(str) TOSTR(str)
//Alt+153 ™
#define CAMP L"The Force Studio. All Rights Reserved.\0"
#ifdef _WIN64
#define APPDEC L"WiFiAssistant™  64BIT\0"
#else
#define APPDEC L"WiFiAssistant™  32BIT\0"
#endif

#define PROJECTNAME L"WiFiAssistant.exe\0"
#define PRODUCTNAME "WiFiAssistant™ VirtualWiFi Auto Setting Assistant\0"
#define LEGALTRADMARKS L"ForceStudio™\0"

#define YEAR L"2015"

#ifdef MAJOR_VERSION
#define MAJOR MAJOR_VERSION
#else
#define MAJOR      1
#endif

#ifdef MINJOR_VERSION
#define MINOR MINJOR_VERSION
#else
#define MINOR      0
#endif

#ifdef PATCH_TIME
#define PATCHOR PATCH_TIME
#else
#define PATCHOR   1
#endif

#ifdef BUILD_TIME
#define BUILDTIMER BUILD_TIME
#else
#define BUILDTIMER 1
#endif

#define VERSION_STRING   TOSTRING(MAJOR.MINOR.PATCHOR.BUILDTIMER)
#define VERSION_WORDS  MAJOR,MINOR,PATCHOR,BUILDTIMER

#endif

