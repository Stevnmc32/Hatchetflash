/* Texture.h file description:
* Defines the Texture class, and states all of the functions that it will have.
* (The functions for this class are definied in "Texture.cpp".)
*/

#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include<glad/glad.h>
#include<stb/stb_image.h>

#include"shaderClass.h"

class Texture
{
public:
	GLuint ID;
	GLenum type;
	Texture(const char* image, GLenum texType, GLenum slot, GLenum format, GLenum pixelType);

	// States the existance of a function which assigns a texture unit to a texture.
	void texUnit(Shader& shader, const char* uniform, GLuint unit);
	
	// States the existence of some basic functions as defined in "Texture.cpp".
	void Bind();
	void Unbind();
	void Delete();
};
#endif