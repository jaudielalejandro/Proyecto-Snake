//=======================================================================
//Nombre: Game.hpp
//Autores : Josue Daniel Portales Rodriguez,
//          Jaudiel Alejandro Jaime Lomeli
//
//Version : Final
//Descripcion: Definicion de la clase Game
//=======================================================================
#pragma once

#include <map>
#include <memory>
#include <string>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>

namespace Engine
{
    class AssetMan
    {
    public:
        AssetMan();
        ~AssetMan();

        void AddTexture(int id, const std::string &filePath, bool wantRepeated = false);
        void AddFont(int id, const std::string &filePath);

        const sf::Texture &GetTexture(int id) const;
        const sf::Font &GetFont(int id) const;

    private:
        std::map<int, std::unique_ptr<sf::Texture>> m_textures;
        std::map<int, std::unique_ptr<sf::Font>> m_fonts;
    };
}
