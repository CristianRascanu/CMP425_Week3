#pragma once

enum class TankMessageState : std::uint8_t {
	Join,
	State
};

struct JoinMessage {
	std::string colour;
};
// A simple tank update message
// FIXME: Consider what else we need to send and include it here.
struct TankMessage {
	// The coordinates of the tank within the game world.
	float x, y;
	sf::Angle barrelRotation, bodyRotation;
	//std::string colour;

};