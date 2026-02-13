// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "JVFloatLabeledTextField",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "JVFloatLabeledTextField",
            targets: ["JVFloatLabeledTextField"]
        ),
    ],
    targets: [
        .target(
            name: "JVFloatLabeledTextField",
            dependencies: [],
            path: "JVFloatLabeledTextField",
            sources: ["JVFloatLabeledTextField"],
            publicHeadersPath: "SPMHeaders"
        )
    ]
)
