#ifndef H_TIFFIMAGE
#define H_TIFFIMAGE

#include "headers/GeoReferencingLibrary.h"
#include "headers/IImage.h"

namespace GeoReferencingLibrary {

class GEO_REFERENCING_LIBRARY_DECLSPEC TiffImage: public IImage {
public:
	virtual unsigned int getHeight() const { return m_height; }
	virtual unsigned int getWidth() const { return m_width;	}
private:
	unsigned int m_height;
	unsigned int m_width;
protected:
	virtual void accept(IVisitor<IImage>& visitor);
};

} // namespace GeoReferencingLibrary 

#endif