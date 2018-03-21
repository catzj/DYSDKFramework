#
#  Be sure to run `pod spec lint DYSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  s.name         = "DYSDK"
  s.version      = "0.0.1"
  s.summary      = "DYSDK framework"

  s.platform     = :ios, '8.0'
  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description  = "DYSDK framework"

  s.homepage     = "https://github.com/catzj/DYSDKFramework"

  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author             = { "catzj" => "179729302@qq.com" }
  

  s.source       = { :git => "https://github.com/catzj/DYSDKFramework.git", :tag => "#{s.version}" }


  s.source_files  = "DYSDKFramework/DYSDK.framework/Headers/*.{h}"
  s.vendored_frameworks = "DYSDKFramework/DYSDK.framework"
  s.public_header_files = "DYSDKFramework/DYSDK.framework/Headers/DYSDK.h"
  # s.resource_bundles = {
  #     "DYSDK" => ["DYSDK.bundle/*.*"]
  # }
  s.resource = "DYSDK.bundle"

end