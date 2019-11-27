#ifndef ISLEMDLL_H
#define ISLEMDLL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_ISLEMDLL
#define ISLEMDLL __declspec(dllexport)
#else
#define ISLEMDLL __declspec(dllimport)
#endif
void __stdcall ISLEMDLL hello(const char *s);
int ISLEMDLL topla(int x,int y);
#ifdef __cplusplus
}
#endif

#endif