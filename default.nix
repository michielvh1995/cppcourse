with import <nixpkgs> {};
stdenv.mkDerivation rec {
  name = "cppproject";
  buildInputs = [ glew freeimage SDL2 ];
  src = ./.;
}
