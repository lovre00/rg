#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNorm;
layout (location = 2) in vec2 aTexCord;

out vec3 normal;
out vec2 TexCord;
out vec3 FragColor;

uniform float horizontal;
uniform float vertical;

void main()
{ 
    vec3 new = aPos + vec3(horizontal, vertical, 0.0);
	gl_Position=vec4(new,1.0f);
	//FragColor = normalize(new);
	normal=aNorm;

	vec2 mirroredTexCoords = vec2(1.0 - aTexCord.s, aTexCord.t);
	TexCord=mirroredTexCoords;

}