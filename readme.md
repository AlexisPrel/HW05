# Phys 2200 - Computational Physics - Homework 5
## General informations

Author:	Alexis Prel 
Last updated:	11/3/2014

___
 
## Description

In this project we take advantage of *struct* objects in C in a simple case. Triangles are indeed described as structures of 3 points, which are themselves structures of two coordinates (scalars) in the plane. As a triangle is fully described by those six scalars, we can perform any kind of inferrence of a triangle property from them.


In particular, we wrote functions that computes for an arbitrary triangle:
- its perimeter
- its area
- the radius of the circle it is inscribed in.

This method allows a simple definition of the triangle such that all those quantities can be computed by having the structure as an argument instead of repeating the six scalars by which it is described.
