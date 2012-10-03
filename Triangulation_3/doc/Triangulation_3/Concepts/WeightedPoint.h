
/*!
\ingroup PkgTriangulation3Concepts
\cgalconcept

The concept `WeightedPoint` is needed by 
`Regular_triangulation_euclidean_traits_3`. 
It must fulfill the following requirements: 

\hasModel `CGAL::Weighted_point`

\sa `CGAL::Regular_triangulation_euclidean_traits_3` 
\sa `CGAL::Regular_triangulation_3`

*/

class WeightedPoint {
public:

/// \name Types 
/// @{

/*! 
The point type 
*/ 
typedef Hidden_type Point; 

/*! 
The weight type 
*/ 
typedef Hidden_type Weight; 

/*! 
The ring type 
*/ 
typedef Point::RT RT; 

/// @} 

/// \name Creation 
/// @{

/*! 

*/ 
WeightedPoint(const Point &p=Point(), const Weight &w 
= Weight(0)); 

/// @}

/// \name Access Functions
/// @{

/*! 

*/ 
Point point() const; 

/*! 

*/ 
Weight weight() const; 

/// @}

}; /* end WeightedPoint */

