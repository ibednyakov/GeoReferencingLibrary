#ifndef H_IMAGEREADERVISITOR
#define H_IMAGEREADERVISITOR

#include "headers/GeoReferencingLibrary.h"
#include "headers/IImage.h"
#include "headers/PngImage.h"
#include "headers/JpegImage.h"
#include "headers/TiffImage.h"
#include "headers/IVisitor.h"

#include <array>

namespace GeoReferencingLibrary {

class GEO_REFERENCING_LIBRARY_DECLSPEC ImageReaderVisitor: public IVisitor<IImage> {
	std::array<char, 0> m_image();
public:
	virtual void visit(const PngImage& image_container);
	virtual void visit(const JpegImage& image_container);
	virtual void visit(const TiffImage& image_container);
};

} // namespace GeoReferencingLibrary 

#endif