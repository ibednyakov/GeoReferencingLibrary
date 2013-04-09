#ifndef H_IIMAGE
#define H_IIMAGE

#include "headers/GeoReferencingLibrary.h"
#include "headers/IVisitor.h"

namespace GeoReferencingLibrary {

class GEO_REFERENCING_LIBRARY_DECLSPEC IImage {
	public:
		virtual unsigned int getImageHeight() const = 0;
		virtual unsigned int getImageWidth() const = 0;
		
	protected:
		virtual void accept(IVisitor<IImage>& visitor) const = 0;
};

} // namespace GeoReferencingLibrary 

#endif