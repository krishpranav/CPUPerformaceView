Pod::Spec.new do |s|
  s.name         = "CPUPerformanceView"
  s.version      = "1.3.1"
  s.summary      = "Shows FPS, CPU usage, app and iOS versions above the status bar and report FPS and CPU usage via delegate."
  s.homepage     = "https://github.com/krishpranav/CPUPerformaceView"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "krishpranav" => "" }
  s.platform     = :ios, "8.0"
  s.ios.deployment_target = "8.0"
  s.source       = { :git => "https://github.com/krishpranav/CPUPerformaceView.git", :tag => "1.3.1" }
  s.source_files = "GDPerformanceView/GDPerformanceMonitoring/*"
  s.frameworks = "UIKit", "Foundation", "QuartzCore"  
  s.requires_arc = true
end
