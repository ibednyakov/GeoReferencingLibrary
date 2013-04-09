#ifndef H_GEOREFERENCINGLIBRARY
#define H_GEOREFERENCINGLIBRARY

#ifndef GEO_REFERENCING_LIBRARY_IMPORT
	#define GEO_REFERENCING_LIBRARY_DECLSPEC __declspec(dllexport)
#else
	#define GEO_REFERENCING_LIBRARY_DECLSPEC __declspec(dllimport)
#endif

#include "headers/IImage.h"

#include <stdlib.h>
#include <stdio.h>
#include <string>

namespace GeoReferencingLibrary {

	GEO_REFERENCING_LIBRARY_DECLSPEC IImage* __cdecl image_factory(const std::string& filepath);

} // namespace GeoReferencingLibrary 

#endif