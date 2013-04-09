
#include "headers/JpegImage.h"
#include "headers/ImageReaderVisitor.h"

namespace GeoReferencingLibrary {

void JpegImage::accept(IVisitor<IImage>& visitor) {
	visitor.visit(*this);
}

} // namespace GeoReferencingLibrary 