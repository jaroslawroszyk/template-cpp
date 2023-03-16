<div align="left">
  <img title="title" src="./assets/icon.svg" alt="icon" align="left" width="100" style="padding-right: 1ch">
  <h1>template-cpp</h1>
  <p><strong>For quickly setting up a Github project</strong></p>
</div>

[![Build With Tests](https://github.com/jaroslawroszyk/template-cpp/actions/workflows/Ci.yml/badge.svg?branch=main)](https://github.com/jaroslawroszyk/template-cpp/actions/workflows/Ci.yml)
[![Project Status](https://www.repostatus.org/badges/latest/active.svg)](https://www.repostatus.org/#active)
[![License MIT](https://img.shields.io/badge/license-MIT-blue)](#license)

## Getting Started

This project uses submodules to clone the repo correctly you should:
```
git clone --recursive [Url to repo]
```

If you have already cloned the project, you should update the submodules:
```
git submodule update --init --recursive
```

The project also uses gtest to write unit tests.
If you want build this project you should:

```
mkdir build
cd build
cmake ..
make
```

In addition, we have configured "CI", which checks whether the project was built correctly and whether the tests passed.

### Have Fun!

## Contributing

See the [contributing](Contributing.md) guide for detailed instructions on how to get started with this project.

## License

The project is made available under the MIT license. See the [license](LICENSE) file for more information.
