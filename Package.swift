// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "configurationService",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "configurationService",
            targets: ["configurationService"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
//        .target(
//            name: "configurationService",
//            dependencies: ["configurationService"]),
        .binaryTarget(
            name: "configurationService",
            url: "https://github.com/visaribishi/configurationService/releases/download/1.1.0/configurationService-1.0.0.zip",
            checksum: "f31bb2b83d923a0322e479b324d75d92d056b3633c18d5b17cfe8d6ccf5d9c26")
    ]
)
