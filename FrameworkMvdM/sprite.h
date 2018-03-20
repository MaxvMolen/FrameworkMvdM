/**
* @file sprite.h
*
* @brief The Sprite header file.
*/

#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include <GL/glew.h>

class Sprite
{
	public:
		Sprite(/*std::string image_path*/);
		virtual ~Sprite();

		glm::vec2 pivot;
		glm::vec2 uvdim;

		GLuint texture() { return _texture; };
		GLuint vertexbuffer() { return _vertexbuffer; };
		GLuint uvbuffer() { return _uvbuffer; };

		void setupSprite(const std::string& filename, float pivotx, float pivoty, float uvwidth, float uvheight);

		unsigned int width() { return _width; };
		unsigned int height() { return _height; };

	private:
		GLuint loadTGA(const std::string& imagepath);

		GLuint _texture;
		GLuint _vertexbuffer;
		GLuint _uvbuffer;

		std::string _texturename; ///< @brief texturename (path to the file)

		unsigned int _width;
		unsigned int _height;
};

#endif SPRITE_H
