<?php

namespace Rector\Core\Tests\Rector\Property\InjectAnnotationClassRector\Fixture;

use JMS\DiExtraBundle\Annotation as DI;

class SkipParameterInject
{
    /**
     * @DI\Inject("%kernel.cache_dir%")
     */
    private $cacheDir;
}
