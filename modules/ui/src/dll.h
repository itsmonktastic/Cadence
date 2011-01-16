#ifdef WIN32

#if BUILD_UI_DLL
# define UIIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define UIIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */

#else
#define UIIMPORT
#endif
