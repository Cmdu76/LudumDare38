#ifndef OE_COLOR_HPP
#define OE_COLOR_HPP

#include "Prerequisites.hpp"

namespace oe
{

class Color
{
	public:
		Color();
		Color(U8 red, U8 green, U8 blue, U8 alpha = 255);
		Color(U8 lightness);
		Color(U32 color);
		Color(const std::string& color);

		bool isOpaque() const;

		std::string toString() const;
		void fromString(const std::string& color);
		
		U32 toInteger() const;
		void fromInteger(U32 color);

		U8 r;
		U8 g;
		U8 b;
		U8 a;

		// Basic color
		static const Color Black;
		static const Color White;
		static const Color Red;
		static const Color Green;
		static const Color Blue;
		static const Color Yellow;
		static const Color Magenta;
		static const Color Cyan;
		static const Color Transparent;

		// Standard
		static const Color Brown;
		static const Color Orange;
		static const Color Pink;
		static const Color BabyPink;
		static const Color HotPink;
		static const Color Salmon;
		static const Color Violet;
		static const Color Purple;
		static const Color Peach;
		static const Color Lime;
		static const Color Mint;
		static const Color Gray;

		// Lights
		static const Color LightBlack;
		static const Color LightBlue;
		static const Color LightRed;
		static const Color LightMagenta;
		static const Color LightGreen;
		static const Color LightCyan;
		static const Color LightYellow;
		static const Color LightBrown;
		static const Color LightOrange;
		static const Color LightPink;
		static const Color LightBabyPink;
		static const Color LightHotPink;
		static const Color LightSalmon;
		static const Color LightViolet;
		static const Color LightPurple;
		static const Color LightPeach;
		static const Color LightLime;
		static const Color LightMint;
		static const Color LightGray;

		// Darks
		static const Color DarkBlue;
		static const Color DarkRed;
		static const Color DarkMagenta;
		static const Color DarkGreen;
		static const Color DarkCyan;
		static const Color DarkYellow;
		static const Color DarkWhite;
		static const Color DarkBrown;
		static const Color DarkOrange;
		static const Color DarkPink;
		static const Color DarkBabyPink;
		static const Color DarkHotPink;
		static const Color DarkSalmon;
		static const Color DarkViolet;
		static const Color DarkPurple;
		static const Color DarkPeach;
		static const Color DarkLime;
		static const Color DarkMint;
		static const Color DarkGray;
};

bool operator==(const Color& left, const Color& right);
bool operator!=(const Color& left, const Color& right);
Color operator+(const Color& left, const Color& right);
Color operator-(const Color& left, const Color& right);
Color operator*(const Color& left, const Color& right);
Color& operator+=(Color& left, const Color& right);
Color& operator-=(Color& left, const Color& right);
Color& operator*=(Color& left, const Color& right);

template <> inline std::string toString<Color>(const Color& value)
{
	return value.toString();
}

template <> inline Color fromString<Color>(const std::string& string)
{
	return Color(string);
}

} // namespace oe

#endif // OE_COLOR_HPP
