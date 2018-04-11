/**
 * Copyright 2017 Max van der Molen <maxharm1811@gmail.com>
 *
 * @file myufo.h
 *
 * @brief description of MyUfo behavior.
 */

#ifndef MYUFO_H
#define MYUFO_H

#include <FrameworkMvdM/entity.h>

/// @brief The MyUfo class is the Ufo implementation.
class MyUfo : public Entity

{
public:
	/// @brief Constructor
	MyUfo();
	/// @brief Destructor
	virtual ~MyUfo();
	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);
	/// @brief movement is automatically called every frame
	/// @brief used to move the player
	/// @return void
	virtual void MyUfo::movement(float deltaTime);
	/// @brief used to change the players look and color
	/// @return void
	virtual void MyUfo::bounderies(float width, float height);

private:
	/* add your private declarations */
};

#endif /* MYUFO_H */