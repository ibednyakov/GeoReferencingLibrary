
#include "headers/PngImage.h"
#include "headers/ImageReaderVisitor.h"

namespace GeoReferencingLibrary {

void PngImage::accept(IVisitor<IImage>& visitor) {
	visitor.visit(*this);
}

} // namespace GeoReferencingLibrary 