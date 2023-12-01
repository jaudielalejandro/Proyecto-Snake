//=======================================================================
//Nombre: Game.hpp
//Autores : Josue Daniel Portales Rodriguez,
//          Jaudiel Alejandro Jaime Lomeli
//
//Version : Final
//Descripcion: Definicion de la clase State
//=======================================================================
#pragma once

#include <SFML/System/Time.hpp>

namespace Engine
{
    class State
    {
    public:
        State(){};
        virtual ~State(){};

        virtual void Init() = 0;
        virtual void ProcessInput() = 0;
        virtual void Update(const sf::Time& deltaTime) = 0;
        virtual void Draw() = 0;

        virtual void Pause(){};
        virtual void Start(){};
    };
}
