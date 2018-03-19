/**
* @file corscene.h
*
* @brief The Corescene header file.
*/

#ifndef CORESCENE_H
#define CORESCENE_H

#include <iostream>
#include <cstdio>
#include <GL/glew.h>
#include <string>
#include <vector>

#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <glm/gtx/euler_angles.hpp>

#include <FrameworkMvdM/scene.h>

/// @brief The Corescene class
class CoreScene : public Scene
{
public:
	CoreScene();///< @brief Constructor of an Corescene
	virtual ~CoreScene();///< @brief Destructor of an Corescene

	/// @brief update this Corescene. This function is Pure virtual. User MUST implement this in subclass.
	/// @param deltaTime The time that's passed since the last update.
	/// @return void
	virtual void update(float deltaTime) = 0;
	/// @brief quit will close the program
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void quit();
	/// @brief keeps track of the current active scene
	static int activescene;
	/// @brief will bring you back to the main menu of the game
	/// @return void
	virtual void sceneselect(int ds);
protected:

private:

};


#endif CORESCENE_H
