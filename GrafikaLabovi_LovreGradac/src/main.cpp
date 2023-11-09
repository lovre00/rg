#include <iostream>
#include <string>

#include "Window.h"
#include "Renderer.h"
#include "Model.h"
#include "Shader.h"
#include "Texture.h"

#include "glm/glm.hpp"

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    Window window("Vjezba3", SCR_WIDTH, SCR_HEIGHT);
  
    Model model("res/models/rectangle.obj");
    Shader shader("res/shaders/vShader.glsl", "res/shaders/fShader.glsl");
    Texture tex("res/textures/container.jpg");
    Renderer render;

    glm::vec3 color = glm::vec3(1.0f, 0.0f, 0.0f);

    while (!window.isClosed())
    {
        window.ProcessInput();
        render.Clear();
        //shader.SetUniformFloat("horizontal", 0.1);
        //shader.SetUniformFloat("vertical", 0.1);
        //shader.SetUniformVec3("color", color);

        model.Draw(shader, tex);


        window.SwapAndPoll();
    }

    window.CloseWindow();

    return 0;
}