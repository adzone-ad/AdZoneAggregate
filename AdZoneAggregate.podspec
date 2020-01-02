Pod::Spec.new do |s|
  s.name = "AdZoneAggregate"
  s.version = "0.1.2"
  s.summary = "AdZone Advertising Aggregate SDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"zhang guozhi"=>"zgz682000@163.com"}
  s.homepage = "http://172.28.60.77/adzone-aggregate-ios-sdk/adzoneaggregate"
  s.description = "TODO: Add long description of the pod here."
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/AdZoneAggregate.framework'
end
