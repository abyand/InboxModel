// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "inboxmodel",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "inboxmodel",
            targets: ["inboxmodel"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "inboxmodel",
            path: "./inboxmodel.xcframework"
        ),
    ]
)
