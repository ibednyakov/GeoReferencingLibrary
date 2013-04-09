#ifndef H_IVISITOR
#define H_IVISITOR

#include "headers/IImage.h"
#include "headers/GeoReferencingLibrary.h"

namespace GeoReferencingLibrary {

template <typename T>
class GEO_REFERENCING_LIBRARY_DECLSPEC IVisitor {
public:
	virtual void visit(const T& visit_parameter) const = 0;
};

} // namespace GeoReferencingLibrary 

#endif