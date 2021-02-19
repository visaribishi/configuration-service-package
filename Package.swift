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
        .binaryTarget(name: "configurationService", url: "https://nexus.i.openresearch.com/repository/raw/configurationService/configurationService-1.0.1.zip", checksum: "4502636811a21eb62db1368e1f75c8af41f34873b7acc56e5ee2ec34dbf004bf")
    ]
)
