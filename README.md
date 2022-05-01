# Hello Bazel!

## Scope

Learn how to use [Bazel](https://bazel.build/) for C++, including the [new
module](https://bazel.build/docs/bzlmod) system.


## Building

### Building with the default compiler

$ bazel run main:hello


### Creating compile_commands.json

The language server processor needs the information about the build system.
This is accomplished by integrating [Hedron Vision's
tool](https://github.com/hedronvision/bazel-compile-commands-extractor).

$ bazel run @hedron_compile_commands//:refresh_all


## License

Copyright 2021 Florin Iucha

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
