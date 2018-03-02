#include <GL\glew.h>
#include <glm\gtc\type_ptr.hpp>
#include <glm\gtc\matrix_transform.hpp>

// Boolean variables allow to show/hide the primitives
bool renderSphere = true;
bool renderCapsule = true;
bool renderParticles = false;
bool renderCloth = false;
bool renderCube = true;

namespace Cube {
	extern void setupCube();
	extern void cleanupCube();
	extern void updateCube(const glm::mat4& transform);
	extern void drawCube();
}

void setupPrims() {
	Cube::setupCube();
}
void cleanupPrims() {
	Cube::cleanupCube();
}

void renderPrims() {
	if (renderCube)
		Cube::drawCube();
}
