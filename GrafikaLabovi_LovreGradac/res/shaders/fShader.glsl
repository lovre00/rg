#version 330 core

in vec3 normals;
in vec2 TexCord;

out vec4 fColor;
in vec3 FragColor;

uniform sampler2D tex;
uniform vec3 color;

void main()
{
	fColor=texture(tex, TexCord);
	// fColor = vec4(FragColor, 1.0);
}