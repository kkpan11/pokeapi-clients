# coding: utf-8

from typing import ClassVar, Dict, List, Tuple  # noqa: F401



class BaseItemFlingEffectApi:
    subclasses: ClassVar[Tuple] = ()

    def __init_subclass__(cls, **kwargs):
        super().__init_subclass__(**kwargs)
        BaseItemFlingEffectApi.subclasses = BaseItemFlingEffectApi.subclasses + (cls,)
    def item_fling_effect_list(
        self,
        limit: int,
        offset: int,
    ) -> str:
        ...


    def item_fling_effect_read(
        self,
        id: int,
    ) -> str:
        ...
