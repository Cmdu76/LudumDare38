#ifndef OE_MAP_HPP
#define OE_MAP_HPP

#include "Entity.hpp"

#include "Components/LayerComponent.hpp"

#include "../System/MapUtility.hpp"

namespace oe
{

// TODO : Read from .tmx

class World;
class Map : public Entity
{
	public:
		Map(World& world);
		virtual ~Map();

		std::vector<Vector2i> getNeighboors(const Vector2i& coords, bool diag = false);
		Vector2i worldToCoords(const Vector2& world);
		Vector2 coordsToWorld(const Vector2i& coords);

		//LayerComponent& addLayer();
		// TODO : Improve Layer usage

		const std::string& getName() const;
		void setName(const std::string& name);

		Tileset* getTileset() const;
		void setTileset(Tileset* tileset);

		const Vector2i& getSize() const;
		void setSize(const Vector2i& size);

		const Vector2i& getTileSize() const;
		void setTileSize(const Vector2i& tileSize);

		MapUtility::Orientation getOrientation() const;
		void setOrientation(MapUtility::Orientation orientation);

		MapUtility::StaggerAxis getStaggerAxis() const;
		void setStaggerAxis(MapUtility::StaggerAxis axis);

		MapUtility::StaggerIndex getStaggerIndex() const;
		void setStaggerIndex(MapUtility::StaggerIndex index);

		U32 getHexSideLength() const;
		void setHexSideLength(U32 hexSideLength);

	private:
		std::vector<LayerComponent> mLayers;

		std::string mName;
		Tileset* mTileset;
		Vector2i mSize;
		Vector2i mTileSize;
		MapUtility::Orientation mOrientation;
		MapUtility::StaggerAxis mStaggerAxis;
		MapUtility::StaggerIndex mStaggerIndex;
		U32 mHexSideLength;
};

} // namespace oe

#endif // OE_MAP_HPP