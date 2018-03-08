#include <imgui\imgui.h>
#include <imgui\imgui_impl_sdl_gl3.h>

int e = 4;

bool show_test_window = false;
void GUI() {
	bool show = true;
	ImGui::Begin("Simulation Parameters", &show, 0);

	// Do your GUI code here....
	{	
		ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);//FrameRate
		
		//Escollir exercici
		ImGui::RadioButton("Exercici 1", &e, 1); 
		ImGui::RadioButton("Exercici 2a", &e, 2); ImGui::SameLine();
		ImGui::RadioButton("Exercici 2b", &e, 3);
		ImGui::RadioButton("Exercici 3", &e, 4);
	}
	// .........................
	
	ImGui::End();

	// Example code -- ImGui test window. Most of the sample code is in ImGui::ShowTestWindow()
	if(show_test_window) {
		ImGui::SetNextWindowPos(ImVec2(650, 20), ImGuiSetCond_FirstUseEver);
		ImGui::ShowTestWindow(&show_test_window);
	}
}

void PhysicsInit() {
	// Do your initialization code here...
	// ...................................
}

void PhysicsUpdate(float dt) {
	// Do your update code here...
	// ...........................
}

void PhysicsCleanup() {
	// Do your cleanup code here...
	// ............................
}