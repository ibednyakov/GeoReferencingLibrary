
#include "headers/TiffImage.h"
#include "headers/ImageReaderVisitor.h"

namespace GeoReferencingLibrary {

void TiffImage::accept(IVisitor<IImage>& visitor) {
	visitor.visit(*this);
}

} // namespace GeoReferencingLibrary 