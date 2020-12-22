#
# Be sure to run `pod lib lint XsdaKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XsdaKit'
  s.version          = '1.0.4'
  s.summary          = 'Smart Data analysis Kit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  Smart Data analysis Kit.
                       DESC

  s.homepage         = 'https://github.com/xsdakit/Xsdakit'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'XSDA' => 'xsdakit@gmail.com' }
  s.source           = { :git => 'https://github.com/xsdakit/Xsdakit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  
  s.ios.vendored_frameworks = "Release/Frameworks/XsdaKit.framework"

  #Alex add dependency
  s.dependency 'FMDB', '~> 2.7.0'
  s.dependency 'FlatBuffers-ObjC', '~> 0.0.2'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'AFNetworking','~> 3.0'
  s.dependency 'SAMKeychain','~> 1.5.3'
  
  #Activate add dependency
#      s.dependency 'FlatBuffers-ObjC', '~> 0.0.2'
  s.dependency 'Adjust', '~> 4.24.0'
  
end
