auto MagnumFont::doOpenData(const Containers::ArrayView<const char> data, const Float) -> Properties {
    if(!_opened) _opened.emplace();

    if(!_opened->filePath && !fileCallback()) {
        Error{} << "Text::MagnumFont::openData(): the font can be opened only from the filesystem or if a file callback is present";
        return {};
    }

 if(cache.features() & GlyphCacheFeature::ImageProcessing) {
        const Image3D image3 = cache.processedImage();
        tgaData = Trade::TgaImageConverter().convertToData(ImageView2D{image3.format(), image3.size().xy(), image3.data()});
    } else {
        const ImageView3D image3 = cache.image();
        tgaData = Trade::TgaImageConverter().convertToData(ImageView2D{image3.format(), image3.size().xy(), image3.data()});
    }
    if(!tgaData) {
        Error{} << "Text::MagnumFontConverter::exportFontToData(): cannot create a TGA image";
        return {};
    }
void ignoreLine(std::istream& in) {
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template<std::size_t size> Math::Vector<size, Float> extractFloatData(const std::string& str, Float* extra = nullptr) {
    std::vector<std::string> data = Utility::String::splitWithoutEmptyParts(str, ' ');
    if(data.size() < size || data.size() > size + (extra ? 1 : 0)) {
        Error() << "Trade::ObjImporter::mesh(): invalid float array size";
        throw 0;
    }
