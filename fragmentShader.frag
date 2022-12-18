#version 330 core

in vec3 Normal;  
in vec3 FragPos;  

in vec2 TexCoord;
out vec4 FragColor;
uniform vec3 lightPos; 
uniform vec3 viewPos; 
uniform vec3 lightColor;
uniform vec3 objectColor;


// Texture samplers
uniform sampler2D ourTexture;

void main()
{
 FragColor = texture(ourTexture, TexCoord);
}