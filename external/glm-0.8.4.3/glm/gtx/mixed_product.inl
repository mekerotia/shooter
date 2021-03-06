///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2009 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2007-04-03
// Updated : 2008-09-17
// Licence : This source is under MIT License
// File    : glm/gtx/mixed_product.inl
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace glm{
namespace gtx{

namespace mixed_product
{
    template <typename valType> 
	inline valType mixedProduct(
		detail::tvec3<valType> const & v1, 
		detail::tvec3<valType> const & v2, 
		detail::tvec3<valType> const & v3)
	{
		return dot(cross(v1, v2), v3);
	}
}
//namespace mixed_product

}//namespace gtx
}//namespace glm









